// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

public final class DateRecord implements Comparable<DateRecord> {


    /*package*/ final java.util.Date createdAt;

    public DateRecord(
            java.util.Date createdAt) {
        this.createdAt = createdAt;
    }

    public java.util.Date getCreatedAt() {
        return createdAt;
    }

    @Override
    public boolean equals(Object obj) {
        if (!(obj instanceof DateRecord)) {
            return false;
        }
        DateRecord other = (DateRecord) obj;
        return this.createdAt.equals(other.createdAt);
    }

    @Override
    public int hashCode() {
        // Pick an arbitrary non-zero starting value
        int hashCode = 17;
        hashCode = hashCode * 31 + (createdAt.hashCode());
        return hashCode;
    }

    @Override
    public int compareTo(DateRecord other)  {
        int tempResult;
        tempResult = this.createdAt.compareTo(other.createdAt);
        if (tempResult != 0) {
            return tempResult;
        }
        return 0;
    }
}
